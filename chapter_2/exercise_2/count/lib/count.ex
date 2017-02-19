defmodule Count do
  @moduledoc """
  Documentation for Count.
  """

  def count do
    get_input()
    |> output_result
  end

  def get_input do
    IO.gets("What is the input string? ")
    |> String.trim
  end

  def output_result(input) do
    IO.puts("#{input} has #{input |> String.length} characters.")
  end
end
