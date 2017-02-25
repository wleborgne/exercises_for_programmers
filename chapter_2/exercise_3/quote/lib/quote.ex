defmodule Quote do
  @moduledoc """
  Documentation for Quote.
  """

  def quote do
    get_input()
    |> output_result
  end

  defp get_input() do
    {get_quote(), get_who()}
  end

  defp output_result({qte, who}) do
    who <> " says, \"" <> qte <> "\""
    |> IO.puts
  end

  defp get_quote() do
    do_get_input("What is the quote? ")
  end

  defp get_who() do
    do_get_input("Who said it? ")
  end

  defp do_get_input(prompt) do
    IO.gets(prompt)
    |> String.trim
  end
end
